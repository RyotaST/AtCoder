A,B,C=gets.split.map(&:to_i)
num = A.gcd(B).gcd(C)
result = 0
if A != num
  result += (A/num-1)
end
if A != num
  result += (B/num-1)
end
if C != num
  result += (C/num-1)
end

puts result