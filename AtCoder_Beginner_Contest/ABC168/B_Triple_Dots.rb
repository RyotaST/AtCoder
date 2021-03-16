K = gets.to_i
S = gets.chomp

if S.size > K
  puts "#{S[0..(K-1)]}"+"..."
else
  puts S
end