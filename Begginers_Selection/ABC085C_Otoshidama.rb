N, Y = gets.chomp.split.map(&:to_i)
a, b, c = 0
result = [-1, -1, -1]

(0..N).to_a.each do |n|
  a = ((Y - 1000 * N - 4000 * n).rationalize / 9000.rationalize).to_f
  next if a < 0
  next if a > N
  if a - a.to_i == 0
    next if N-a-n < 0
    a = a.to_i
    result = [a , n, N-a-n.to_i]
    break
  end
end

print "#{result[0]} #{result[1]} #{result[2]}"