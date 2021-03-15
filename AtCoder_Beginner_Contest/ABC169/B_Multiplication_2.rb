N = gets.to_i
a = gets.split.map(&:to_i)
if a.include?(0)
  puts 0
  exit
end
result = a.inject do |result, n|
  if result > 10**18
    puts -1
    exit
  else
    result *= n
  end
end
puts result > 10**18 ? -1 : result