Pod::Spec.new do |s|
  s.name     = 'MTMenuBar'
  s.version  = '0.2'
  s.platform = :ios
  s.license  = 'MIT'
  s.homepage = 'https://github.com/mnaito/MTMenuBar' 
  s.summary  = 'Alternative for UIActionSheet.'
  s.author   = { 'Mitsutaka Naito' => 'mits430@users.noreply.github.com' }
  s.source   = { :git => 'https://github.com/mits430/MTMenuBar', :tag => '0.1' }

  s.description = 'iOS menu bar , a UIActionSheet replacement. It can contain more than 6 buttons,' \
                        'when the button quantities greater than 6, it will separate them into pages, you can' \
                        'scroll the menu horizontally.' 

  s.source_files = 'MTMenuBar/*.{h,m}'
  s.frameworks   = 'QuartzCore', 'CoreGraphics' 
#  s.resources    = 'MTMenuBar/MTMenuBar.bundle'
  s.requires_arc = true
end
