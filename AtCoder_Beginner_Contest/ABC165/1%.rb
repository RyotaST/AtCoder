X = gets.to_i
yen = 100
times = 0
while yen < X
  times += 1
  yen = yen * 101 / 100 / 1
end

puts times