/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIGameHighScore.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIGameHighScore::OAIGameHighScore(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGameHighScore::OAIGameHighScore() {
    this->initializeModel();
}

OAIGameHighScore::~OAIGameHighScore() {}

void OAIGameHighScore::initializeModel() {

    m_position_isSet = false;
    m_position_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_score_isSet = false;
    m_score_isValid = false;
}

void OAIGameHighScore::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGameHighScore::fromJsonObject(QJsonObject json) {

    m_position_isValid = ::tele_rest::fromJsonValue(m_position, json[QString("position")]);
    m_position_isSet = !json[QString("position")].isNull() && m_position_isValid;

    m_user_isValid = ::tele_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_score_isValid = ::tele_rest::fromJsonValue(m_score, json[QString("score")]);
    m_score_isSet = !json[QString("score")].isNull() && m_score_isValid;
}

QString OAIGameHighScore::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGameHighScore::asJsonObject() const {
    QJsonObject obj;
    if (m_position_isSet) {
        obj.insert(QString("position"), ::tele_rest::toJsonValue(m_position));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::tele_rest::toJsonValue(m_user));
    }
    if (m_score_isSet) {
        obj.insert(QString("score"), ::tele_rest::toJsonValue(m_score));
    }
    return obj;
}

qint32 OAIGameHighScore::getPosition() const {
    return m_position;
}
void OAIGameHighScore::setPosition(const qint32 &position) {
    m_position = position;
    m_position_isSet = true;
}

bool OAIGameHighScore::is_position_Set() const{
    return m_position_isSet;
}

bool OAIGameHighScore::is_position_Valid() const{
    return m_position_isValid;
}

OAIUser OAIGameHighScore::getUser() const {
    return m_user;
}
void OAIGameHighScore::setUser(const OAIUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIGameHighScore::is_user_Set() const{
    return m_user_isSet;
}

bool OAIGameHighScore::is_user_Valid() const{
    return m_user_isValid;
}

qint32 OAIGameHighScore::getScore() const {
    return m_score;
}
void OAIGameHighScore::setScore(const qint32 &score) {
    m_score = score;
    m_score_isSet = true;
}

bool OAIGameHighScore::is_score_Set() const{
    return m_score_isSet;
}

bool OAIGameHighScore::is_score_Valid() const{
    return m_score_isValid;
}

bool OAIGameHighScore::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_position_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_score_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGameHighScore::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_position_isValid && m_user_isValid && m_score_isValid && true;
}

} // namespace tele_rest
