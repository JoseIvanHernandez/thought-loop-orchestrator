# launch_gui.ps1 - Simple Borland-style GUI mockup using local HTML
$dashboard = @"
<!DOCTYPE html>
<html>
<head>
  <title>Hackfrontier Scanner</title>
  <style>
    body { background-color: #111; color: #0f0; font-family: 'Courier New'; padding: 20px; }
    .box { border: 2px solid #0f0; padding: 20px; margin: 10px; }
    h1 { color: #0ff; }
  </style>
</head>
<body>
  <h1>🚀 Hackfrontier Retro Dashboard</h1>
  <div class='box'>✅ Tools Verified: bcc.exe, tlink.exe, dfa.exe</div>
  <div class='box'>📡 Live Feeds Loaded: OK</div>
  <div class='box'>🧠 Next Step: Data Scan Ready</div>
</body>
</html>
"@

$tempPath = "$env:TEMP\hackfrontier_gui.html"
$dashboard | Set-Content -Path $tempPath
Start-Process $tempPath
