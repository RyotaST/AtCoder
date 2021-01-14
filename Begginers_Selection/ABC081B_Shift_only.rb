N = gets
array = gets.chomp.split(" ").map{|n| n.to_i}
count = 0

while array.all? {|n| n.even?}
  array = array.map {|n| n/2}
  count += 1
end

puts count