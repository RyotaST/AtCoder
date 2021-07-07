a,b,c = gets.split.map(&:to_i)
puts a < c.rationalize ** b.rationalize ? "Yes" : "No"