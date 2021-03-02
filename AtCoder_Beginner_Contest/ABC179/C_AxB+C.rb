N = gets.to_i
sum = 0
1.upto(N) do {|n| N % n == 0 ? sum += (N/n-1) : sum += N/n}
puts sum