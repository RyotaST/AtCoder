box = []
sum = 0
count = 0
N = gets.chomp.to_i
N.times {box.push(gets.chomp.split.map(&:to_i))}

if N > 1
  (N-1).downto(1) do |n1|
    n1.times do |n2|
      slope = (box[count][1] - box[n2+count+1][1]).rationalize / (box[count][0] - box[n2+count+1][0]).rationalize
      sum += 1 if slope.between?(-1, 1)
    end
    count += 1
  end
end

puts sum
