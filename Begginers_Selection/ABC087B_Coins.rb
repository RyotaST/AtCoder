a = gets.to_i
b = gets.to_i
c = gets.to_i
x = gets.to_i
count = 0

(0..a).to_a.each do |n1|
  (0..b).to_a.each do |n2|
    (0..c).to_a.each do |n3|
      count += 1 if 500*n1 + 100*n2 + 50*n3 == x
    end
  end
end

puts count