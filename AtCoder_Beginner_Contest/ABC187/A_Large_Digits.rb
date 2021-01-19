A, B = gets.chomp.split.map(&:to_i)

def sum(x)
  a = x / 100
  b = (x - a*100) / 10
  c = (x - a*100 - b*10)
  a + b + c
end

(sum(A) >= sum(B)) ? (puts sum(A)) : (puts sum(B))