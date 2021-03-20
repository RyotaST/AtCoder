S = gets.chomp
T = gets.chomp
if T == "#{S}#{T[-1]}"
  puts "Yes"
else
  puts "No"
end