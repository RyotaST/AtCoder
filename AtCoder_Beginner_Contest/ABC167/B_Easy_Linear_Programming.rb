A,B,C,K=gets.split.map(&:to_i)
result = 0
if K <= A
  result += K
  puts result
  exit
else
  result += A
  if K-A <= B
  else
    result -= K-A-B
  end
end

puts result