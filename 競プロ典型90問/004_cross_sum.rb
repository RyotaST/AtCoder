H,W = gets.chomp.split.map(&:to_i)
box = Array.new(H){gets.chomp.split.map(&:to_i)}
rows_sum = Array.new(H){0}
columns_sum = Array.new(W){0}
box.each_with_index do |value1, i1|
  columns_sum.each_with_index do |value2, i2|
    columns_sum[i2] += value1[i2]
    rows_sum[i1] += value1[i2]
  end
end

result = Array.new(H){Array.new}
rows_sum
columns_sum
rows_sum.each_with_index do |value1, i1|
  columns_sum.each_with_index do |value2, i2|
    result[i1].push(value1 + value2 - box[i1][i2])
  end  
  puts result[i1].join(" ")
end
