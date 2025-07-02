/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

/*
 * OAIGiftInfo.h
 *
 * Describes a service message about a regular gift that was sent or received.
 */

#ifndef OAIGiftInfo_H
#define OAIGiftInfo_H

#include <QJsonObject>

#include "OAIGift.h"
#include "OAIMessageEntity.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIGift;
class OAIMessageEntity;

class OAIGiftInfo : public OAIObject {
public:
    OAIGiftInfo();
    OAIGiftInfo(QString json);
    ~OAIGiftInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIGift getGift() const;
    void setGift(const OAIGift &gift);
    bool is_gift_Set() const;
    bool is_gift_Valid() const;

    QString getOwnedGiftId() const;
    void setOwnedGiftId(const QString &owned_gift_id);
    bool is_owned_gift_id_Set() const;
    bool is_owned_gift_id_Valid() const;

    qint32 getConvertStarCount() const;
    void setConvertStarCount(const qint32 &convert_star_count);
    bool is_convert_star_count_Set() const;
    bool is_convert_star_count_Valid() const;

    qint32 getPrepaidUpgradeStarCount() const;
    void setPrepaidUpgradeStarCount(const qint32 &prepaid_upgrade_star_count);
    bool is_prepaid_upgrade_star_count_Set() const;
    bool is_prepaid_upgrade_star_count_Valid() const;

    bool isCanBeUpgraded() const;
    void setCanBeUpgraded(const bool &can_be_upgraded);
    bool is_can_be_upgraded_Set() const;
    bool is_can_be_upgraded_Valid() const;

    QString getText() const;
    void setText(const QString &text);
    bool is_text_Set() const;
    bool is_text_Valid() const;

    QList<OAIMessageEntity> getEntities() const;
    void setEntities(const QList<OAIMessageEntity> &entities);
    bool is_entities_Set() const;
    bool is_entities_Valid() const;

    bool isIsPrivate() const;
    void setIsPrivate(const bool &is_private);
    bool is_is_private_Set() const;
    bool is_is_private_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIGift m_gift;
    bool m_gift_isSet;
    bool m_gift_isValid;

    QString m_owned_gift_id;
    bool m_owned_gift_id_isSet;
    bool m_owned_gift_id_isValid;

    qint32 m_convert_star_count;
    bool m_convert_star_count_isSet;
    bool m_convert_star_count_isValid;

    qint32 m_prepaid_upgrade_star_count;
    bool m_prepaid_upgrade_star_count_isSet;
    bool m_prepaid_upgrade_star_count_isValid;

    bool m_can_be_upgraded;
    bool m_can_be_upgraded_isSet;
    bool m_can_be_upgraded_isValid;

    QString m_text;
    bool m_text_isSet;
    bool m_text_isValid;

    QList<OAIMessageEntity> m_entities;
    bool m_entities_isSet;
    bool m_entities_isValid;

    bool m_is_private;
    bool m_is_private_isSet;
    bool m_is_private_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIGiftInfo)

#endif // OAIGiftInfo_H
