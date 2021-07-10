A,B,C=gets.split.map(&:to_i)
num = A.gcd(B).gcd(C)
puts (A/num-1)+(B/num-1)+(C/num-1)