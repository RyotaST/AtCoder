H,W = gets.chomp.split.map(&:to_i)
box = Array.new(H){gets.chomp.split.map(&:to_i)}
rows_sum = []
columns_sum = []
box.each{|n| rows_sum.push(n.inject{|result, item| result+item})}