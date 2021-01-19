box = []
sum = 0
N = gets.chomp.to_i
N.times {box.push(gets.chomp.split.map(&:to_i))}

if N > 1
  (N-1).downto(1) do |n1|
    n1.times do |n2|
      slope = ((box[n2][1] - box[n2+1][1]).rationalize / (box[n2][0] - box[n2+1][0]).rationalize).to_f
      sum += 1 if slope.between?(-1, 1)
    end
  end
end

puts sum
