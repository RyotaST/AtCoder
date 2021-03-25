require 'set'

N, K = gets.split.map(&:to_i)
sweets = Array.new(K*2){gets.split.map(&:to_i)}
result = Set.new
count = 0
sweets.each do |n1|
  if count % 2 == 0
    count += 1
    next
  else
    count += 1
    n1.each do |n2|
      result << n2
    end
  end
end

puts N - result.length
#test