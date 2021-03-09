require 'set'

K = gets.to_i
result = 0
seven = 7
judge = Set.new
num = 0

while true
  result += 1
  if seven % K == 0
    puts result
    exit
  else
    if judge.include?(seven%K)
      puts -1
      exit
    else
      judge << seven%K
    end
    seven %= K
    seven = seven*10+7
  end
end