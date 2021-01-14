n, a, b = gets.chomp.split.map(&:to_i)
judge = 0
sum = 0

(1..n).to_a.map do |x1|
  if x1 >= 10
    x1.to_s.split(//).map(&:to_i).each do |x2|
      judge += x2
    end
    sum += x1 if a <= judge && judge <= b
    judge = 0
  else
    sum += x1 if a <= x1 && x1 <= b
  end
end

puts sum