H,W = gets.chomp.split.map(&:to_i)
box = Array.new(H){gets.chomp.split.map(&:to_i)}
rows_sum = []
columns_sum = Array.new(W){0}
box.each do |n|
  rows_sum.push(n.inject{|result, item| result+item})
  W.times{|time| columns_sum = columns_sum.map{|x|} x+box[time]}
end

p rows_sum
p columns_sum