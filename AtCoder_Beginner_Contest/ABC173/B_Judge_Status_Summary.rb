N = gets.to_i
result = [0,0,0,0]
N.times do
  s = gets.chomp
  if s == 'AC'
    result[0] += 1
  elsif s == 'WA'
    result[1] += 1
  elsif s == 'TLE'
    result[2] += 1
  else
    result[3] += 1
  end
end
puts "AC x #{result[0]}"
puts "WA x #{result[1]}"
puts "TLE x #{result[2]}"
puts "RE x #{result[3]}"