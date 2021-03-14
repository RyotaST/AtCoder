A, B ,W = gets.split.map(&:to_i)
max = 0
min = 0

if (W*1000)%B == 0
  min = W*1000/B
else
  if (((W*1000)/B)+1) * A > W*1000
    puts "UNSATISFIABLE"
    exit
  else
    min = W*1000/B+1
end
if (W*1000)%A == 0
  max = W*1000/A
else
  max = W*1000/A
end

puts "#{min} #{max}"