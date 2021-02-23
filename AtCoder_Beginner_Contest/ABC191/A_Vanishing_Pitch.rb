V,T,S,D=gets.split.map(&:to_i)
puts V*T <= D && D <= S*V ? "No" : "Yes"