N = gets.to_i
p (N-11..N-1).inject{|result, n1| result*n1}/(1..11).inject{|result, n1| result*n1}