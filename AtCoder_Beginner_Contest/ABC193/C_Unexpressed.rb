require 'set'
N = gets.to_i
a = Set.new
b = (2..N).to_a
result = 0

b.each do |n|
  break if n > 10**5
  count = 2
  break if (n ** count) > N
  while (n**count) <= N
    a << n**count
    count += 1
  end
end

p N - a.size