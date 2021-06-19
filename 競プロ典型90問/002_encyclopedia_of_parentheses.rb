N = gets.to_i
count = 0
result = []
["(", ")"].repeated_permutation(N).to_a.each do |n|
  n.each do |value|
    (value == "(") ? (count += 1) : (count -= 1)
    break if count < 0 || count > N/2
  end
  result.push(n.join) if count == 0
  count = 0
end
result.sort.each{|n| puts n}