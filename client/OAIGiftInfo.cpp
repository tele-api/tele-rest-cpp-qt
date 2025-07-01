/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAIGiftInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIGiftInfo::OAIGiftInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGiftInfo::OAIGiftInfo() {
    this->initializeModel();
}

OAIGiftInfo::~OAIGiftInfo() {}

void OAIGiftInfo::initializeModel() {

    m_gift_isSet = false;
    m_gift_isValid = false;

    m_owned_gift_id_isSet = false;
    m_owned_gift_id_isValid = false;

    m_convert_star_count_isSet = false;
    m_convert_star_count_isValid = false;

    m_prepaid_upgrade_star_count_isSet = false;
    m_prepaid_upgrade_star_count_isValid = false;

    m_can_be_upgraded_isSet = false;
    m_can_be_upgraded_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_entities_isSet = false;
    m_entities_isValid = false;

    m_is_private_isSet = false;
    m_is_private_isValid = false;
}

void OAIGiftInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGiftInfo::fromJsonObject(QJsonObject json) {

    m_gift_isValid = ::tele_rest::fromJsonValue(m_gift, json[QString("gift")]);
    m_gift_isSet = !json[QString("gift")].isNull() && m_gift_isValid;

    m_owned_gift_id_isValid = ::tele_rest::fromJsonValue(m_owned_gift_id, json[QString("owned_gift_id")]);
    m_owned_gift_id_isSet = !json[QString("owned_gift_id")].isNull() && m_owned_gift_id_isValid;

    m_convert_star_count_isValid = ::tele_rest::fromJsonValue(m_convert_star_count, json[QString("convert_star_count")]);
    m_convert_star_count_isSet = !json[QString("convert_star_count")].isNull() && m_convert_star_count_isValid;

    m_prepaid_upgrade_star_count_isValid = ::tele_rest::fromJsonValue(m_prepaid_upgrade_star_count, json[QString("prepaid_upgrade_star_count")]);
    m_prepaid_upgrade_star_count_isSet = !json[QString("prepaid_upgrade_star_count")].isNull() && m_prepaid_upgrade_star_count_isValid;

    m_can_be_upgraded_isValid = ::tele_rest::fromJsonValue(m_can_be_upgraded, json[QString("can_be_upgraded")]);
    m_can_be_upgraded_isSet = !json[QString("can_be_upgraded")].isNull() && m_can_be_upgraded_isValid;

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_entities_isValid = ::tele_rest::fromJsonValue(m_entities, json[QString("entities")]);
    m_entities_isSet = !json[QString("entities")].isNull() && m_entities_isValid;

    m_is_private_isValid = ::tele_rest::fromJsonValue(m_is_private, json[QString("is_private")]);
    m_is_private_isSet = !json[QString("is_private")].isNull() && m_is_private_isValid;
}

QString OAIGiftInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGiftInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_gift.isSet()) {
        obj.insert(QString("gift"), ::tele_rest::toJsonValue(m_gift));
    }
    if (m_owned_gift_id_isSet) {
        obj.insert(QString("owned_gift_id"), ::tele_rest::toJsonValue(m_owned_gift_id));
    }
    if (m_convert_star_count_isSet) {
        obj.insert(QString("convert_star_count"), ::tele_rest::toJsonValue(m_convert_star_count));
    }
    if (m_prepaid_upgrade_star_count_isSet) {
        obj.insert(QString("prepaid_upgrade_star_count"), ::tele_rest::toJsonValue(m_prepaid_upgrade_star_count));
    }
    if (m_can_be_upgraded_isSet) {
        obj.insert(QString("can_be_upgraded"), ::tele_rest::toJsonValue(m_can_be_upgraded));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_entities.size() > 0) {
        obj.insert(QString("entities"), ::tele_rest::toJsonValue(m_entities));
    }
    if (m_is_private_isSet) {
        obj.insert(QString("is_private"), ::tele_rest::toJsonValue(m_is_private));
    }
    return obj;
}

OAIGift OAIGiftInfo::getGift() const {
    return m_gift;
}
void OAIGiftInfo::setGift(const OAIGift &gift) {
    m_gift = gift;
    m_gift_isSet = true;
}

bool OAIGiftInfo::is_gift_Set() const{
    return m_gift_isSet;
}

bool OAIGiftInfo::is_gift_Valid() const{
    return m_gift_isValid;
}

QString OAIGiftInfo::getOwnedGiftId() const {
    return m_owned_gift_id;
}
void OAIGiftInfo::setOwnedGiftId(const QString &owned_gift_id) {
    m_owned_gift_id = owned_gift_id;
    m_owned_gift_id_isSet = true;
}

bool OAIGiftInfo::is_owned_gift_id_Set() const{
    return m_owned_gift_id_isSet;
}

bool OAIGiftInfo::is_owned_gift_id_Valid() const{
    return m_owned_gift_id_isValid;
}

qint32 OAIGiftInfo::getConvertStarCount() const {
    return m_convert_star_count;
}
void OAIGiftInfo::setConvertStarCount(const qint32 &convert_star_count) {
    m_convert_star_count = convert_star_count;
    m_convert_star_count_isSet = true;
}

bool OAIGiftInfo::is_convert_star_count_Set() const{
    return m_convert_star_count_isSet;
}

bool OAIGiftInfo::is_convert_star_count_Valid() const{
    return m_convert_star_count_isValid;
}

qint32 OAIGiftInfo::getPrepaidUpgradeStarCount() const {
    return m_prepaid_upgrade_star_count;
}
void OAIGiftInfo::setPrepaidUpgradeStarCount(const qint32 &prepaid_upgrade_star_count) {
    m_prepaid_upgrade_star_count = prepaid_upgrade_star_count;
    m_prepaid_upgrade_star_count_isSet = true;
}

bool OAIGiftInfo::is_prepaid_upgrade_star_count_Set() const{
    return m_prepaid_upgrade_star_count_isSet;
}

bool OAIGiftInfo::is_prepaid_upgrade_star_count_Valid() const{
    return m_prepaid_upgrade_star_count_isValid;
}

bool OAIGiftInfo::isCanBeUpgraded() const {
    return m_can_be_upgraded;
}
void OAIGiftInfo::setCanBeUpgraded(const bool &can_be_upgraded) {
    m_can_be_upgraded = can_be_upgraded;
    m_can_be_upgraded_isSet = true;
}

bool OAIGiftInfo::is_can_be_upgraded_Set() const{
    return m_can_be_upgraded_isSet;
}

bool OAIGiftInfo::is_can_be_upgraded_Valid() const{
    return m_can_be_upgraded_isValid;
}

QString OAIGiftInfo::getText() const {
    return m_text;
}
void OAIGiftInfo::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAIGiftInfo::is_text_Set() const{
    return m_text_isSet;
}

bool OAIGiftInfo::is_text_Valid() const{
    return m_text_isValid;
}

QList<OAIMessageEntity> OAIGiftInfo::getEntities() const {
    return m_entities;
}
void OAIGiftInfo::setEntities(const QList<OAIMessageEntity> &entities) {
    m_entities = entities;
    m_entities_isSet = true;
}

bool OAIGiftInfo::is_entities_Set() const{
    return m_entities_isSet;
}

bool OAIGiftInfo::is_entities_Valid() const{
    return m_entities_isValid;
}

bool OAIGiftInfo::isIsPrivate() const {
    return m_is_private;
}
void OAIGiftInfo::setIsPrivate(const bool &is_private) {
    m_is_private = is_private;
    m_is_private_isSet = true;
}

bool OAIGiftInfo::is_is_private_Set() const{
    return m_is_private_isSet;
}

bool OAIGiftInfo::is_is_private_Valid() const{
    return m_is_private_isValid;
}

bool OAIGiftInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_gift.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_owned_gift_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_convert_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prepaid_upgrade_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_be_upgraded_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_private_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGiftInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_gift_isValid && true;
}

} // namespace tele_rest
