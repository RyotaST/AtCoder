n,l = gets.split.map(&:to_i)
k = gets.to_i
a = gets.split.map(&:to_i)
result = 0
min = 0
left = 0

answer = (1..l).bsearch do |x|
  a.each_with_index do |value, index|
    if index == 0
      result = 0
    end
    result += value
    if index == (a.length-1)
      break
    end
    if result >= x
      result = 0
      next
    end
  end
  puts result
  result >= x
end

puts answer