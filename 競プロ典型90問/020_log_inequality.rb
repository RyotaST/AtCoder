a,b,c = gets.split.map(&:to_i)
puts (Math.log(a,2)).rationalize < b * (Math.log(c,2)).rationalize ? "Yes" : "No"