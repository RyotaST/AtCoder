p = Array.new(gets.to_i){gets.split.map(&:to_i)}
p.combination(3) do |x|
  max = Math.sqrt((x[0][0]-x[1][0])^2 + (x[0][1]-x[1][1])^2)
  if Math.sqrt((x[1][0]-x[2][0])^2 + (x[1][1]-x[2][1])^2) > max
    max = Math.sqrt((x[1][0]-x[2][0])^2 + (x[1][1]-x[2][1])^2)
  elsif Math.sqrt((x[2][0]-x[0][0])^2 + (x[2][1]-x[0][1])^2) > max
    max = Math.sqrt((x[1][0]-x[2][0])^2 + (x[1][1]-x[2][1])^2)
  end
end