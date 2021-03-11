X, Y = gets.split.map(&:to_i)
[2,4].repeated_combination(X) do |n|
  if n.sum == Y
    puts "Yes"
    exit
  end
end

puts "No"