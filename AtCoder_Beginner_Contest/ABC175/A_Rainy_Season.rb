S = gets.chomp.chars
result = 0
max = 0
count = 0

S.each do |n|
  count += 1
  if n == "R"
    result += 1
    if count == S.size
      max = result if result > max
    end
  else
    max = result if result > max
    result = 0
  end
end

puts max