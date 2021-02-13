require 'thread'

H, W = gets.split.map(&:to_i)
C = gets.split.map(&:to_i)
D = gets.split.map(&:to_i)
field = []
H.times do
  field.push(gets.chomp.chars)
end
dx2 = [2, 2, 2,  2,  2, 1, 1, 1,  1,  1, 0, 0,  0,  0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2]
dy2 = [2, 1, 0, -1, -2, 2, 1, 0, -1, -2, 2, 1, -1, -2,  2,  1,  0, -1, -2,  2,  1,  0, -1, -2]

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

graph1 = Array.new(H) {Array.new(W) {Array.new}}
graph2 = Array.new(H) {Array.new(W) {Array.new}}

dist = Array.new(H){Array.new(W){-1}}
que = Queue.new
que2 = Queue.new
dist[C[0]-1][C[1]-1] = 0
que.push([C[0]-1,C[1]-1])
que2.push([C[0]-1,C[1]-1])

until que.empty? && que2.empty?
  if !(que.empty?)
    v = que.pop
    que2.push(v)
    0.upto(3) do |n|
      next if (v[0]+dx[n] < 0) || (v[0]+dx[n] > H-1) || (v[1]+dy[n] < 0) || (v[1]+dy[n] > W-1)
      next if field[v[0]+dx[n]][v[1]+dy[n]] == '#'
      next if dist[v[0]+dx[n]][v[1]+dy[n]] != -1
      dist[v[0]+dx[n]][v[1]+dy[n]] = dist[v[0]][v[1]]
      que.push([v[0]+dx[n], v[1]+dy[n]])
      que2.push([v[0]+dx[n], v[1]+dy[n]])
    end
  else
    until que2.empty?
      x = que2.pop
      0.upto(23) do |n1|
        next if (x[0]+dx2[n1] < 0) || (x[0]+dx2[n1] > H-1) || (x[1]+dy2[n1] < 0) || (x[1]+dy2[n1] > W-1)
        next if field[x[0]+dx2[n1]][x[1]+dy2[n1]] == '#'
        next if dist[x[0]+dx2[n1]][x[1]+dy2[n1]] != -1
        dist[x[0]+dx2[n1]][x[1]+dy2[n1]] = dist[x[0]][x[1]] + 1
        que.push([x[0]+dx2[n1], x[1]+dy2[n1]])
      end
    end
  end
end

p dist[D[0]-1][D[1]-1]