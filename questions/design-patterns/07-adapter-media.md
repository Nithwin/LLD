# Adapter Pattern for Media Player

**Category**: Design Patterns  
**Difficulty**: Easy

## Problem Statement

Design a media player that can play different audio formats (MP3, MP4, VLC, AVI). Use the Adapter pattern to integrate third-party libraries that have incompatible interfaces.

## Requirements

### Functional Requirements
1. Play multiple audio/video formats
2. Integrate third-party players with different interfaces
3. Support basic operations: play, pause, stop, seek
4. Display current playback status
5. Handle unsupported formats gracefully

### Non-Functional Requirements
1. Easy integration of new format players
2. Minimal changes to existing code when adding formats
3. Consistent interface for all formats

## Constraints

- Each format has its own player library
- Some players only support specific operations
- File paths must be validated before playback
- Playback position must be tracked

## Expected Deliverables

### Class Design
- **MediaPlayer**: Target interface
- **AudioPlayer**: Client class
- **AdvancedMediaPlayer**: Adaptee interface
- **MP4Player, VLCPlayer**: Adaptee implementations
- **MediaAdapter**: Adapter class

### Key Operations
- `play(format, filename)`: Play media file - O(1)
- `pause()`: Pause playback - O(1)
- `stop()`: Stop playback - O(1)
- `seek(position)`: Jump to position - O(1)

### Design Patterns
- Adapter Pattern
- Factory Pattern (for creating adapters)

## Example Usage

```
MediaPlayer player = new AudioPlayer();

player.play("mp3", "song.mp3");
player.play("mp4", "video.mp4");
player.play("vlc", "movie.vlc");
player.play("avi", "clip.avi");
```

## Test Cases

### Test Case 1
**Input**: Play MP3 file  
**Expected Output**: Direct playback without adapter

### Test Case 2
**Input**: Play MP4 file  
**Expected Output**: Adapter used to play through third-party player

### Test Case 3
**Input**: Attempt to play unsupported format  
**Expected Output**: Error message displayed

## Evaluation Criteria

- Correct Adapter pattern implementation
- Seamless integration of incompatible interfaces
- Proper error handling
- Clean abstraction
- Extensibility

## Sample Tests

### Sample Test 1: Playing Different Formats
```java
// Input
MediaPlayer player = new AudioPlayer();

player.play("mp3", "song.mp3");
player.play("mp4", "video.mp4");
player.play("vlc", "movie.vlc");

// Output
Playing MP3 file: song.mp3
Using adapter for MP4 format
Playing MP4 file: video.mp4
Using adapter for VLC format
Playing VLC file: movie.vlc
```

### Sample Test 2: Unsupported Format
```java
// Input
MediaPlayer player = new AudioPlayer();
player.play("avi", "clip.avi");
player.play("mkv", "video.mkv");

// Output
Using adapter for AVI format
Playing AVI file: clip.avi
Error: Unsupported format - mkv
```

## Additional Notes

Consider how to handle format detection automatically. Think about supporting streaming vs local files.
