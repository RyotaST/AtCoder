N,D = gets.split.map(&:to_i)
coordinates = Array.new(N) {gets.split.map(&:to_i)}
result = 0
coordinates.each do |n|
  result += 1 if D**2 >= n[0]**2+n[1]**2
end

puts result