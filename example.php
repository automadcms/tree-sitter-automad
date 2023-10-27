@{ name }

<# Some Comment #>
@{ :name }

<# Some Comment #>
<span title="@{ title }">@{ :runtime }</span>

@{ name | /2 | -3.1 | +1  }

@{ name | def('test') | filter | filter (false, 10, 'string') | filter (@{ var | filter(true) } ) }

@{ name |
  def('test') |
  filter |
  filter (false, 10, 'string') |
  filter (@{ var | filter(true) } )
}

<@ for @{ start } to 10 @>
  <span>@{ :i }</span>
<@ end @>

<@ foreach in "*.jpg, *.png" { width: 400, height: 300, crop: true } @>
  <p>@{ :caption }</p>
<@ else @>
  <p>No images found!</p>
<@ end @>

<@ foreach in pagelist @>
  <li>@{ title }</li>
<@ else @>
  <li>No pages here!</li>
<@ end @>

<@ if @{ variable | filter } != 'Hello' @>
  True
<@ else @>
  False
<@ end @>

<@ if not @{ variable | filter } @>
  True
<@ end @>

