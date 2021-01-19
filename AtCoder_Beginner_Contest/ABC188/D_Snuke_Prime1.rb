N, C = gets.chomp.split.map(&:to_i)
box = []
N.times {box.push(gets.chomp.split.map(&:to_i))}
day_min = box[0][0]
day_max = box[0][1]
value = 0
sum = 0

(N-1).times do |n|
  day_min = box[n][0] if box[n][0] < box[n+1][0]
  day_max = box[n+1][1] if box[n][1] < box[n+1][1]
end

(day_min..day_max).to_a.each do |n|
  N.times do |a|
    value += box[a][2] if n.between?(box[a][0], box[a][1])
  end
  (C < value) ? (sum += C) : (sum += value)
  value = 0
end

puts sum