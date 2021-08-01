N, C = gets.chomp.split.map(&:to_i)
box = []
N.times {box.push(gets.chomp.split.map(&:to_i))}
day_min = box[0][0]
day_max = box[0][1]
value = 0
sum = 0

