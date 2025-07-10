# Path to your live feed JSON
$feedFile = "../feeds/live_feeds.json"

if (-Not (Test-Path $feedFile)) {
    Write-Host "❌ Feed file not found at $feedFile"
    exit 1
}

# Parse JSON
$feeds = Get-Content $feedFile | ConvertFrom-Json

Write-Host "`n🌐 Available Live Feeds:`n"

foreach ($key in $feeds.PSObject.Properties.Name) {
    $url = $feeds.$key
    Write-Host "🔗 $key => $url"
}

# Optional: Ask to open in browser
$choice = Read-Host "`nWould you like to open all feeds in your browser? (y/n)"
if ($choice -eq "y") {
    foreach ($url in $feeds.PSObject.Properties.Value) {
        Start-Process $url
    }
}
