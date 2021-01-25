N, M, T = gets.split.map(&:to_i)
cafe_times = []
battery = N
result = 'Yes'
M.times{cafe_times.push(gets.split.map(&:to_i))}

battery = N - cafe_times[0][0]
result = 'No' if battery <= 0
if M > 1
  cafe_times.each_cons(2) do |n|
    battery += n[0][1] - n[0][0]
    battery = N if battery > N
    battery -= n[1][0] - n[0][1]
    if battery <= 0
      result = 'No'
      break
    end
  end
end
battery += cafe_times[-1][1] - cafe_times[-1][0]
battery = N if battery > N
battery -= T - cafe_times[-1][1]
result = 'No' if battery <= 0

puts result