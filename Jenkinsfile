pipeline {
  agent any
  stages {
    stage('build') {
      steps {
        sh 'echo "build"'
      }
    }

    stage('test') {
      parallel {
        stage('test') {
          steps {
            powershell 'echo "unit test"'
          }
        }

        stage('') {
          steps {
            powershell 'echo "lint-test"'
          }
        }

      }
    }

    stage('deploy') {
      steps {
        powershell 'echo "deploy"'
      }
    }

  }
}