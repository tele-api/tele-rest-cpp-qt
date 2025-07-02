/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAITextQuote.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAITextQuote::OAITextQuote(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITextQuote::OAITextQuote() {
    this->initializeModel();
}

OAITextQuote::~OAITextQuote() {}

void OAITextQuote::initializeModel() {

    m_text_isSet = false;
    m_text_isValid = false;

    m_position_isSet = false;
    m_position_isValid = false;

    m_entities_isSet = false;
    m_entities_isValid = false;

    m_is_manual_isSet = false;
    m_is_manual_isValid = false;
}

void OAITextQuote::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITextQuote::fromJsonObject(QJsonObject json) {

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_position_isValid = ::tele_rest::fromJsonValue(m_position, json[QString("position")]);
    m_position_isSet = !json[QString("position")].isNull() && m_position_isValid;

    m_entities_isValid = ::tele_rest::fromJsonValue(m_entities, json[QString("entities")]);
    m_entities_isSet = !json[QString("entities")].isNull() && m_entities_isValid;

    m_is_manual_isValid = ::tele_rest::fromJsonValue(m_is_manual, json[QString("is_manual")]);
    m_is_manual_isSet = !json[QString("is_manual")].isNull() && m_is_manual_isValid;
}

QString OAITextQuote::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITextQuote::asJsonObject() const {
    QJsonObject obj;
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_position_isSet) {
        obj.insert(QString("position"), ::tele_rest::toJsonValue(m_position));
    }
    if (m_entities.size() > 0) {
        obj.insert(QString("entities"), ::tele_rest::toJsonValue(m_entities));
    }
    if (m_is_manual_isSet) {
        obj.insert(QString("is_manual"), ::tele_rest::toJsonValue(m_is_manual));
    }
    return obj;
}

QString OAITextQuote::getText() const {
    return m_text;
}
void OAITextQuote::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAITextQuote::is_text_Set() const{
    return m_text_isSet;
}

bool OAITextQuote::is_text_Valid() const{
    return m_text_isValid;
}

qint32 OAITextQuote::getPosition() const {
    return m_position;
}
void OAITextQuote::setPosition(const qint32 &position) {
    m_position = position;
    m_position_isSet = true;
}

bool OAITextQuote::is_position_Set() const{
    return m_position_isSet;
}

bool OAITextQuote::is_position_Valid() const{
    return m_position_isValid;
}

QList<OAIMessageEntity> OAITextQuote::getEntities() const {
    return m_entities;
}
void OAITextQuote::setEntities(const QList<OAIMessageEntity> &entities) {
    m_entities = entities;
    m_entities_isSet = true;
}

bool OAITextQuote::is_entities_Set() const{
    return m_entities_isSet;
}

bool OAITextQuote::is_entities_Valid() const{
    return m_entities_isValid;
}

bool OAITextQuote::isIsManual() const {
    return m_is_manual;
}
void OAITextQuote::setIsManual(const bool &is_manual) {
    m_is_manual = is_manual;
    m_is_manual_isSet = true;
}

bool OAITextQuote::is_is_manual_Set() const{
    return m_is_manual_isSet;
}

bool OAITextQuote::is_is_manual_Valid() const{
    return m_is_manual_isValid;
}

bool OAITextQuote::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_position_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_manual_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITextQuote::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_text_isValid && m_position_isValid && true;
}

} // namespace tele_rest
