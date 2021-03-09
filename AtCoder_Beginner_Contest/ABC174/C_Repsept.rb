K = gets.to_i
result = 0
seven = 7
if K % 2 == 0 || K % 5 == 0
  puts -1
  exit
else
  while true
    result += 1
    if seven % K == 0
      puts result
      exit
    else
      seven %= K
      seven = seven*10+7
    end
  end
end