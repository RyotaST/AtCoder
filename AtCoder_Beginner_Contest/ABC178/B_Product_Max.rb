a, b, c, d = gets.split.map(&:to_i)

if a<0 && b<0 && c<0 && d<0
  p a*c
elsif (a<0 && b<0 && c<0 && d>=0) || (a<0 && b>=0 && c<0 && d<0)
  p a*c
elsif a<0 && b>=0 && c<0 && d>=0
  p a*c > b*d ? a*c : b*d
elsif a<0 && b<0 && c>=0 && d>=0
  p b*c
elsif (a>=0 && b>=0 && c<0 && d<0)
  p a*d
else
  p b*d
end