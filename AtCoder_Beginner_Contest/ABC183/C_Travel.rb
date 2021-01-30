N, K = gets.split.map(&:to_i)
travel_time = []
result = 0
N.times{travel_time.push(gets.split.map(&:to_i))}

pattern = (2..N).to_a.permutation.map(&:to_a).map do |n|
  n.push(1)
  n.unshift(1)
end

pattern.each do |a|
  time = 0
  a.each_cons(2) {|b,c| time += travel_time[b-1][c-1]}
  result += 1 if time == K
end

p result