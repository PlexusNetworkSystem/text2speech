require 'tts'
def say(word)
    s = "#{word}"
    repeatTimes = 1
    s.play("en", repeatTimes)
end
speak = File.read("/usr/share/Plexus.Network/Asistan/tts/en/speech.word.en")
say("#{speak}")
