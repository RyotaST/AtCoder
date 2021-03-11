N = gets.to_i
puts (N % 1000 == 0) ? 0 : 1000 - (N % 1000)