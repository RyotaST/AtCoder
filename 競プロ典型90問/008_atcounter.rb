N = gets.to_i
S = gets.chomp.chars
result = 0
box = []
[0,1].repeated_permutation(N) do |n|
  n.each_with_index do |value, i|
    value == 1 ? box.push(S[i]) : next
  end
  if box.nil?
    next
  else
    result += 1 if box.join == "atcoder"
  end
  box = []
end

puts result % (10^9+7)