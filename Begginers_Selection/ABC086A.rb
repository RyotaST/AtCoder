a, b = gets.split(" ").map {|n| n.to_i}
result = a * b

if result.odd?
  puts 'Odd'
else
  puts 'Even'
end