H, W = gets.split.map(&:to_i)
C = gets.split.map(&:to_i)
D = gets.split.map(&:to_i)
field = Array.new(H+4){Array.new}
(H+4).times do |n|
  if (n==0)||(n==1)||(n==H+2)||(n==H+3)
    (W+4).times{field[n].push("#")}
  else
    field[n] = ("##"+gets.chomp+"##").chars
  end
end
dx2 = [2, 2, 2,  2,  2, 1, 1,  1,  1, 0,  0, -1, -1, -1, -1, -2, -2, -2, -2, -2]
dy2 = [2, 1, 0, -1, -2, 2, 1, -1, -2, 2, -2,  2,  1, -1, -2,  2,  1,  0, -1, -2]

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

dist = Array.new(H+4){Array.new(W+4){-1}}
que = [[],[]]
dist[C[0]+1][C[1]+1] = 0
que[0].push([C[0]+1,C[1]+1])

until que[0].empty? && que[1].empty?
  if !(que[0].empty?)
    v = que[0].shift
    que[1].push(v)
    0.upto(3) do |n|
      next if field[v[0]+dx[n]][v[1]+dy[n]] == '#'
      next if dist[v[0]+dx[n]][v[1]+dy[n]] != -1
      dist[v[0]+dx[n]][v[1]+dy[n]] = dist[v[0]][v[1]]
      que[0].push([v[0]+dx[n], v[1]+dy[n]])
      que[1].push([v[0]+dx[n], v[1]+dy[n]])
    end
  else
    until que[1].empty?
      x = que[1].shift
      0.upto(19) do |n1|
        next if field[x[0]+dx2[n1]][x[1]+dy2[n1]] == '#'
        next if dist[x[0]+dx2[n1]][x[1]+dy2[n1]] != -1
        dist[x[0]+dx2[n1]][x[1]+dy2[n1]] = dist[x[0]][x[1]] + 1
        que[0].push([x[0]+dx2[n1], x[1]+dy2[n1]])
      end
    end
  end
end

p dist[D[0]+1][D[1]+1]